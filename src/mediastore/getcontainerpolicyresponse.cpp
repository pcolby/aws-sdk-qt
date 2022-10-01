// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getcontainerpolicyresponse.h"
#include "getcontainerpolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaStore {

/*!
 * \class QtAws::MediaStore::GetContainerPolicyResponse
 * \brief The GetContainerPolicyResponse class provides an interace for MediaStore GetContainerPolicy responses.
 *
 * \inmodule QtAwsMediaStore
 *
 *  An AWS Elemental MediaStore container is a namespace that holds folders and objects. You use a container endpoint to
 *  create, read, and delete objects.
 *
 * \sa MediaStoreClient::getContainerPolicy
 */

/*!
 * Constructs a GetContainerPolicyResponse object for \a reply to \a request, with parent \a parent.
 */
GetContainerPolicyResponse::GetContainerPolicyResponse(
        const GetContainerPolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaStoreResponse(new GetContainerPolicyResponsePrivate(this), parent)
{
    setRequest(new GetContainerPolicyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetContainerPolicyRequest * GetContainerPolicyResponse::request() const
{
    Q_D(const GetContainerPolicyResponse);
    return static_cast<const GetContainerPolicyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MediaStore GetContainerPolicy \a response.
 */
void GetContainerPolicyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetContainerPolicyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaStore::GetContainerPolicyResponsePrivate
 * \brief The GetContainerPolicyResponsePrivate class provides private implementation for GetContainerPolicyResponse.
 * \internal
 *
 * \inmodule QtAwsMediaStore
 */

/*!
 * Constructs a GetContainerPolicyResponsePrivate object with public implementation \a q.
 */
GetContainerPolicyResponsePrivate::GetContainerPolicyResponsePrivate(
    GetContainerPolicyResponse * const q) : MediaStoreResponsePrivate(q)
{

}

/*!
 * Parses a MediaStore GetContainerPolicy response element from \a xml.
 */
void GetContainerPolicyResponsePrivate::parseGetContainerPolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetContainerPolicyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaStore
} // namespace QtAws
