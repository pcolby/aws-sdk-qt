// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putaccountpreferencesresponse.h"
#include "putaccountpreferencesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Efs {

/*!
 * \class QtAws::Efs::PutAccountPreferencesResponse
 * \brief The PutAccountPreferencesResponse class provides an interace for Efs PutAccountPreferences responses.
 *
 * \inmodule QtAwsEfs
 *
 *  <fullname>Amazon Elastic File System</fullname>
 * 
 *  Amazon Elastic File System (Amazon EFS) provides simple, scalable file storage for use with Amazon EC2 Linux and Mac
 *  instances in the Amazon Web Services Cloud. With Amazon EFS, storage capacity is elastic, growing and shrinking
 *  automatically as you add and remove files, so that your applications have the storage they need, when they need it. For
 *  more information, see the <a href="https://docs.aws.amazon.com/efs/latest/ug/api-reference.html">Amazon Elastic File
 *  System API Reference</a> and the <a href="https://docs.aws.amazon.com/efs/latest/ug/whatisefs.html">Amazon Elastic File
 *  System User
 *
 * \sa EfsClient::putAccountPreferences
 */

/*!
 * Constructs a PutAccountPreferencesResponse object for \a reply to \a request, with parent \a parent.
 */
PutAccountPreferencesResponse::PutAccountPreferencesResponse(
        const PutAccountPreferencesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EfsResponse(new PutAccountPreferencesResponsePrivate(this), parent)
{
    setRequest(new PutAccountPreferencesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutAccountPreferencesRequest * PutAccountPreferencesResponse::request() const
{
    Q_D(const PutAccountPreferencesResponse);
    return static_cast<const PutAccountPreferencesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Efs PutAccountPreferences \a response.
 */
void PutAccountPreferencesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutAccountPreferencesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Efs::PutAccountPreferencesResponsePrivate
 * \brief The PutAccountPreferencesResponsePrivate class provides private implementation for PutAccountPreferencesResponse.
 * \internal
 *
 * \inmodule QtAwsEfs
 */

/*!
 * Constructs a PutAccountPreferencesResponsePrivate object with public implementation \a q.
 */
PutAccountPreferencesResponsePrivate::PutAccountPreferencesResponsePrivate(
    PutAccountPreferencesResponse * const q) : EfsResponsePrivate(q)
{

}

/*!
 * Parses a Efs PutAccountPreferences response element from \a xml.
 */
void PutAccountPreferencesResponsePrivate::parsePutAccountPreferencesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutAccountPreferencesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Efs
} // namespace QtAws
