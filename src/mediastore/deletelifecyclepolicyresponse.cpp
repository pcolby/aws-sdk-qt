// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletelifecyclepolicyresponse.h"
#include "deletelifecyclepolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaStore {

/*!
 * \class QtAws::MediaStore::DeleteLifecyclePolicyResponse
 * \brief The DeleteLifecyclePolicyResponse class provides an interace for MediaStore DeleteLifecyclePolicy responses.
 *
 * \inmodule QtAwsMediaStore
 *
 *  An AWS Elemental MediaStore container is a namespace that holds folders and objects. You use a container endpoint to
 *  create, read, and delete objects.
 *
 * \sa MediaStoreClient::deleteLifecyclePolicy
 */

/*!
 * Constructs a DeleteLifecyclePolicyResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteLifecyclePolicyResponse::DeleteLifecyclePolicyResponse(
        const DeleteLifecyclePolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaStoreResponse(new DeleteLifecyclePolicyResponsePrivate(this), parent)
{
    setRequest(new DeleteLifecyclePolicyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteLifecyclePolicyRequest * DeleteLifecyclePolicyResponse::request() const
{
    Q_D(const DeleteLifecyclePolicyResponse);
    return static_cast<const DeleteLifecyclePolicyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MediaStore DeleteLifecyclePolicy \a response.
 */
void DeleteLifecyclePolicyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteLifecyclePolicyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaStore::DeleteLifecyclePolicyResponsePrivate
 * \brief The DeleteLifecyclePolicyResponsePrivate class provides private implementation for DeleteLifecyclePolicyResponse.
 * \internal
 *
 * \inmodule QtAwsMediaStore
 */

/*!
 * Constructs a DeleteLifecyclePolicyResponsePrivate object with public implementation \a q.
 */
DeleteLifecyclePolicyResponsePrivate::DeleteLifecyclePolicyResponsePrivate(
    DeleteLifecyclePolicyResponse * const q) : MediaStoreResponsePrivate(q)
{

}

/*!
 * Parses a MediaStore DeleteLifecyclePolicy response element from \a xml.
 */
void DeleteLifecyclePolicyResponsePrivate::parseDeleteLifecyclePolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteLifecyclePolicyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaStore
} // namespace QtAws
