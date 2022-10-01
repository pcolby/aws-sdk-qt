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

#include "removeautoterminationpolicyresponse.h"
#include "removeautoterminationpolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Emr {

/*!
 * \class QtAws::Emr::RemoveAutoTerminationPolicyResponse
 * \brief The RemoveAutoTerminationPolicyResponse class provides an interace for Emr RemoveAutoTerminationPolicy responses.
 *
 * \inmodule QtAwsEmr
 *
 *  Amazon EMR is a web service that makes it easier to process large amounts of data efficiently. Amazon EMR uses Hadoop
 *  processing combined with several Amazon Web Services services to do tasks such as web indexing, data mining, log file
 *  analysis, machine learning, scientific simulation, and data warehouse
 *
 * \sa EmrClient::removeAutoTerminationPolicy
 */

/*!
 * Constructs a RemoveAutoTerminationPolicyResponse object for \a reply to \a request, with parent \a parent.
 */
RemoveAutoTerminationPolicyResponse::RemoveAutoTerminationPolicyResponse(
        const RemoveAutoTerminationPolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EmrResponse(new RemoveAutoTerminationPolicyResponsePrivate(this), parent)
{
    setRequest(new RemoveAutoTerminationPolicyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const RemoveAutoTerminationPolicyRequest * RemoveAutoTerminationPolicyResponse::request() const
{
    Q_D(const RemoveAutoTerminationPolicyResponse);
    return static_cast<const RemoveAutoTerminationPolicyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Emr RemoveAutoTerminationPolicy \a response.
 */
void RemoveAutoTerminationPolicyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(RemoveAutoTerminationPolicyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Emr::RemoveAutoTerminationPolicyResponsePrivate
 * \brief The RemoveAutoTerminationPolicyResponsePrivate class provides private implementation for RemoveAutoTerminationPolicyResponse.
 * \internal
 *
 * \inmodule QtAwsEmr
 */

/*!
 * Constructs a RemoveAutoTerminationPolicyResponsePrivate object with public implementation \a q.
 */
RemoveAutoTerminationPolicyResponsePrivate::RemoveAutoTerminationPolicyResponsePrivate(
    RemoveAutoTerminationPolicyResponse * const q) : EmrResponsePrivate(q)
{

}

/*!
 * Parses a Emr RemoveAutoTerminationPolicy response element from \a xml.
 */
void RemoveAutoTerminationPolicyResponsePrivate::parseRemoveAutoTerminationPolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RemoveAutoTerminationPolicyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Emr
} // namespace QtAws
