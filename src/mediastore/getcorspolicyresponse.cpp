// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getcorspolicyresponse.h"
#include "getcorspolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaStore {

/*!
 * \class QtAws::MediaStore::GetCorsPolicyResponse
 * \brief The GetCorsPolicyResponse class provides an interace for MediaStore GetCorsPolicy responses.
 *
 * \inmodule QtAwsMediaStore
 *
 *  An AWS Elemental MediaStore container is a namespace that holds folders and objects. You use a container endpoint to
 *  create, read, and delete objects.
 *
 * \sa MediaStoreClient::getCorsPolicy
 */

/*!
 * Constructs a GetCorsPolicyResponse object for \a reply to \a request, with parent \a parent.
 */
GetCorsPolicyResponse::GetCorsPolicyResponse(
        const GetCorsPolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaStoreResponse(new GetCorsPolicyResponsePrivate(this), parent)
{
    setRequest(new GetCorsPolicyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetCorsPolicyRequest * GetCorsPolicyResponse::request() const
{
    Q_D(const GetCorsPolicyResponse);
    return static_cast<const GetCorsPolicyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MediaStore GetCorsPolicy \a response.
 */
void GetCorsPolicyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetCorsPolicyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaStore::GetCorsPolicyResponsePrivate
 * \brief The GetCorsPolicyResponsePrivate class provides private implementation for GetCorsPolicyResponse.
 * \internal
 *
 * \inmodule QtAwsMediaStore
 */

/*!
 * Constructs a GetCorsPolicyResponsePrivate object with public implementation \a q.
 */
GetCorsPolicyResponsePrivate::GetCorsPolicyResponsePrivate(
    GetCorsPolicyResponse * const q) : MediaStoreResponsePrivate(q)
{

}

/*!
 * Parses a MediaStore GetCorsPolicy response element from \a xml.
 */
void GetCorsPolicyResponsePrivate::parseGetCorsPolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetCorsPolicyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaStore
} // namespace QtAws
