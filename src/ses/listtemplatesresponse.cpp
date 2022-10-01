// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listtemplatesresponse.h"
#include "listtemplatesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Ses {

/*!
 * \class QtAws::Ses::ListTemplatesResponse
 * \brief The ListTemplatesResponse class provides an interace for Ses ListTemplates responses.
 *
 * \inmodule QtAwsSes
 *
 *  <fullname>Amazon Simple Email Service</fullname>
 * 
 *  This document contains reference information for the <a href="https://aws.amazon.com/ses/">Amazon Simple Email
 *  Service</a> (Amazon SES) API, version 2010-12-01. This document is best used in conjunction with the <a
 *  href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/Welcome.html">Amazon SES Developer Guide</a>.
 * 
 *  </p <note>
 * 
 *  For a list of Amazon SES endpoints to use in service requests, see <a
 *  href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/regions.html">Regions and Amazon SES</a> in the <a
 *  href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/Welcome.html">Amazon SES Developer
 *
 * \sa SesClient::listTemplates
 */

/*!
 * Constructs a ListTemplatesResponse object for \a reply to \a request, with parent \a parent.
 */
ListTemplatesResponse::ListTemplatesResponse(
        const ListTemplatesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SesResponse(new ListTemplatesResponsePrivate(this), parent)
{
    setRequest(new ListTemplatesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListTemplatesRequest * ListTemplatesResponse::request() const
{
    Q_D(const ListTemplatesResponse);
    return static_cast<const ListTemplatesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Ses ListTemplates \a response.
 */
void ListTemplatesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListTemplatesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Ses::ListTemplatesResponsePrivate
 * \brief The ListTemplatesResponsePrivate class provides private implementation for ListTemplatesResponse.
 * \internal
 *
 * \inmodule QtAwsSes
 */

/*!
 * Constructs a ListTemplatesResponsePrivate object with public implementation \a q.
 */
ListTemplatesResponsePrivate::ListTemplatesResponsePrivate(
    ListTemplatesResponse * const q) : SesResponsePrivate(q)
{

}

/*!
 * Parses a Ses ListTemplates response element from \a xml.
 */
void ListTemplatesResponsePrivate::parseListTemplatesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListTemplatesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Ses
} // namespace QtAws
