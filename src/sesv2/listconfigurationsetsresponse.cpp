// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listconfigurationsetsresponse.h"
#include "listconfigurationsetsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SESv2 {

/*!
 * \class QtAws::SESv2::ListConfigurationSetsResponse
 * \brief The ListConfigurationSetsResponse class provides an interace for SESv2 ListConfigurationSets responses.
 *
 * \inmodule QtAwsSESv2
 *
 *  <fullname>Amazon SES API v2</fullname>
 * 
 *  <a href="http://aws.amazon.com/ses">Amazon SES</a> is an Amazon Web Services service that you can use to send email
 *  messages to your
 * 
 *  customers>
 * 
 *  If you're new to Amazon SES API v2, you might find it helpful to review the <a
 *  href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/">Amazon Simple Email Service Developer Guide</a>. The
 *  <i>Amazon SES Developer Guide</i> provides information and code samples that demonstrate how to use Amazon SES API v2
 *  features
 *
 * \sa SESv2Client::listConfigurationSets
 */

/*!
 * Constructs a ListConfigurationSetsResponse object for \a reply to \a request, with parent \a parent.
 */
ListConfigurationSetsResponse::ListConfigurationSetsResponse(
        const ListConfigurationSetsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SESv2Response(new ListConfigurationSetsResponsePrivate(this), parent)
{
    setRequest(new ListConfigurationSetsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListConfigurationSetsRequest * ListConfigurationSetsResponse::request() const
{
    Q_D(const ListConfigurationSetsResponse);
    return static_cast<const ListConfigurationSetsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SESv2 ListConfigurationSets \a response.
 */
void ListConfigurationSetsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListConfigurationSetsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SESv2::ListConfigurationSetsResponsePrivate
 * \brief The ListConfigurationSetsResponsePrivate class provides private implementation for ListConfigurationSetsResponse.
 * \internal
 *
 * \inmodule QtAwsSESv2
 */

/*!
 * Constructs a ListConfigurationSetsResponsePrivate object with public implementation \a q.
 */
ListConfigurationSetsResponsePrivate::ListConfigurationSetsResponsePrivate(
    ListConfigurationSetsResponse * const q) : SESv2ResponsePrivate(q)
{

}

/*!
 * Parses a SESv2 ListConfigurationSets response element from \a xml.
 */
void ListConfigurationSetsResponsePrivate::parseListConfigurationSetsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListConfigurationSetsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SESv2
} // namespace QtAws
