// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listexperimenttemplatesresponse.h"
#include "listexperimenttemplatesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Fis {

/*!
 * \class QtAws::Fis::ListExperimentTemplatesResponse
 * \brief The ListExperimentTemplatesResponse class provides an interace for Fis ListExperimentTemplates responses.
 *
 * \inmodule QtAwsFis
 *
 *  Fault Injection Simulator is a managed service that enables you to perform fault injection experiments on your Amazon
 *  Web Services workloads. For more information, see the <a href="https://docs.aws.amazon.com/fis/latest/userguide/">Fault
 *  Injection Simulator User
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
 * Parses a successful Fis ListExperimentTemplates \a response.
 */
void ListExperimentTemplatesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListExperimentTemplatesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Fis::ListExperimentTemplatesResponsePrivate
 * \brief The ListExperimentTemplatesResponsePrivate class provides private implementation for ListExperimentTemplatesResponse.
 * \internal
 *
 * \inmodule QtAwsFis
 */

/*!
 * Constructs a ListExperimentTemplatesResponsePrivate object with public implementation \a q.
 */
ListExperimentTemplatesResponsePrivate::ListExperimentTemplatesResponsePrivate(
    ListExperimentTemplatesResponse * const q) : FisResponsePrivate(q)
{

}

/*!
 * Parses a Fis ListExperimentTemplates response element from \a xml.
 */
void ListExperimentTemplatesResponsePrivate::parseListExperimentTemplatesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListExperimentTemplatesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Fis
} // namespace QtAws
