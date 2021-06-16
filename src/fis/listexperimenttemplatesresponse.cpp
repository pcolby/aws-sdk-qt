/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "listexperimenttemplatesresponse.h"
#include "listexperimenttemplatesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace FIS {

/*!
 * \class QtAws::FIS::ListExperimentTemplatesResponse
 * \brief The ListExperimentTemplatesResponse class provides an interace for FIS ListExperimentTemplates responses.
 *
 * \inmodule QtAwsFIS
 *
 *  AWS Fault Injection Simulator is a managed service that enables you to perform fault injection experiments on your AWS
 *  workloads. For more information, see the <a href="https://docs.aws.amazon.com/fis/latest/userguide/">AWS Fault Injection
 *  Simulator User
 *
 * \sa FisClient::listExperimentTemplates
 */

/*!
 * Constructs a ListExperimentTemplatesResponse object for \a reply to \a request, with parent \a parent.
 */
ListExperimentTemplatesResponse::ListExperimentTemplatesResponse(
        const ListExperimentTemplatesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : FisResponse(new ListExperimentTemplatesResponsePrivate(this), parent)
{
    setRequest(new ListExperimentTemplatesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListExperimentTemplatesRequest * ListExperimentTemplatesResponse::request() const
{
    Q_D(const ListExperimentTemplatesResponse);
    return static_cast<const ListExperimentTemplatesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful FIS ListExperimentTemplates \a response.
 */
void ListExperimentTemplatesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListExperimentTemplatesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::FIS::ListExperimentTemplatesResponsePrivate
 * \brief The ListExperimentTemplatesResponsePrivate class provides private implementation for ListExperimentTemplatesResponse.
 * \internal
 *
 * \inmodule QtAwsFIS
 */

/*!
 * Constructs a ListExperimentTemplatesResponsePrivate object with public implementation \a q.
 */
ListExperimentTemplatesResponsePrivate::ListExperimentTemplatesResponsePrivate(
    ListExperimentTemplatesResponse * const q) : FisResponsePrivate(q)
{

}

/*!
 * Parses a FIS ListExperimentTemplates response element from \a xml.
 */
void ListExperimentTemplatesResponsePrivate::parseListExperimentTemplatesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListExperimentTemplatesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace FIS
} // namespace QtAws
