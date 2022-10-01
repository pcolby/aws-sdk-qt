// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletecontainerpolicyresponse.h"
#include "deletecontainerpolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaStore {

/*!
 * \class QtAws::MediaStore::DeleteContainerPolicyResponse
 * \brief The DeleteContainerPolicyResponse class provides an interace for MediaStore DeleteContainerPolicy responses.
 *
 * \inmodule QtAwsMediaStore
 *
 *  An AWS Elemental MediaStore container is a namespace that holds folders and objects. You use a container endpoint to
 *  create, read, and delete objects.
 *
 * \sa MediaStoreClient::deleteContainerPolicy
 */

/*!
 * Constructs a DeleteContainerPolicyResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteContainerPolicyResponse::DeleteContainerPolicyResponse(
        const DeleteContainerPolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaStoreResponse(new DeleteContainerPolicyResponsePrivate(this), parent)
{
    setRequest(new DeleteContainerPolicyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteContainerPolicyRequest * DeleteContainerPolicyResponse::request() const
{
    Q_D(const DeleteContainerPolicyResponse);
    return static_cast<const DeleteContainerPolicyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MediaStore DeleteContainerPolicy \a response.
 */
void DeleteContainerPolicyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteContainerPolicyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaStore::DeleteContainerPolicyResponsePrivate
 * \brief The DeleteContainerPolicyResponsePrivate class provides private implementation for DeleteContainerPolicyResponse.
 * \internal
 *
 * \inmodule QtAwsMediaStore
 */

/*!
 * Constructs a DeleteContainerPolicyResponsePrivate object with public implementation \a q.
 */
DeleteContainerPolicyResponsePrivate::DeleteContainerPolicyResponsePrivate(
    DeleteContainerPolicyResponse * const q) : MediaStoreResponsePrivate(q)
{

}

/*!
 * Parses a MediaStore DeleteContainerPolicy response element from \a xml.
 */
void DeleteContainerPolicyResponsePrivate::parseDeleteContainerPolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteContainerPolicyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaStore
} // namespace QtAws
