// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describedrtaccessresponse.h"
#include "describedrtaccessresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Shield {

/*!
 * \class QtAws::Shield::DescribeDRTAccessResponse
 * \brief The DescribeDRTAccessResponse class provides an interace for Shield DescribeDRTAccess responses.
 *
 * \inmodule QtAwsShield
 *
 *  <fullname>Shield Advanced</fullname>
 * 
 *  This is the <i>Shield Advanced API Reference</i>. This guide is for developers who need detailed information about the
 *  Shield Advanced API actions, data types, and errors. For detailed information about WAF and Shield Advanced features and
 *  an overview of how to use the WAF and Shield Advanced APIs, see the <a
 *  href="https://docs.aws.amazon.com/waf/latest/developerguide/">WAF and Shield Developer
 *
 * \sa ShieldClient::describeDRTAccess
 */

/*!
 * Constructs a DescribeDRTAccessResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeDRTAccessResponse::DescribeDRTAccessResponse(
        const DescribeDRTAccessRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ShieldResponse(new DescribeDRTAccessResponsePrivate(this), parent)
{
    setRequest(new DescribeDRTAccessRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeDRTAccessRequest * DescribeDRTAccessResponse::request() const
{
    Q_D(const DescribeDRTAccessResponse);
    return static_cast<const DescribeDRTAccessRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Shield DescribeDRTAccess \a response.
 */
void DescribeDRTAccessResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeDRTAccessResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Shield::DescribeDRTAccessResponsePrivate
 * \brief The DescribeDRTAccessResponsePrivate class provides private implementation for DescribeDRTAccessResponse.
 * \internal
 *
 * \inmodule QtAwsShield
 */

/*!
 * Constructs a DescribeDRTAccessResponsePrivate object with public implementation \a q.
 */
DescribeDRTAccessResponsePrivate::DescribeDRTAccessResponsePrivate(
    DescribeDRTAccessResponse * const q) : ShieldResponsePrivate(q)
{

}

/*!
 * Parses a Shield DescribeDRTAccess response element from \a xml.
 */
void DescribeDRTAccessResponsePrivate::parseDescribeDRTAccessResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeDRTAccessResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Shield
} // namespace QtAws
