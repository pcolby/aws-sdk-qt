// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listprotectionsresponse.h"
#include "listprotectionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Shield {

/*!
 * \class QtAws::Shield::ListProtectionsResponse
 * \brief The ListProtectionsResponse class provides an interace for Shield ListProtections responses.
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
 * \sa ShieldClient::listProtections
 */

/*!
 * Constructs a ListProtectionsResponse object for \a reply to \a request, with parent \a parent.
 */
ListProtectionsResponse::ListProtectionsResponse(
        const ListProtectionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ShieldResponse(new ListProtectionsResponsePrivate(this), parent)
{
    setRequest(new ListProtectionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListProtectionsRequest * ListProtectionsResponse::request() const
{
    Q_D(const ListProtectionsResponse);
    return static_cast<const ListProtectionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Shield ListProtections \a response.
 */
void ListProtectionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListProtectionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Shield::ListProtectionsResponsePrivate
 * \brief The ListProtectionsResponsePrivate class provides private implementation for ListProtectionsResponse.
 * \internal
 *
 * \inmodule QtAwsShield
 */

/*!
 * Constructs a ListProtectionsResponsePrivate object with public implementation \a q.
 */
ListProtectionsResponsePrivate::ListProtectionsResponsePrivate(
    ListProtectionsResponse * const q) : ShieldResponsePrivate(q)
{

}

/*!
 * Parses a Shield ListProtections response element from \a xml.
 */
void ListProtectionsResponsePrivate::parseListProtectionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListProtectionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Shield
} // namespace QtAws
