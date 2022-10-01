// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletecorspolicyresponse.h"
#include "deletecorspolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaStore {

/*!
 * \class QtAws::MediaStore::DeleteCorsPolicyResponse
 * \brief The DeleteCorsPolicyResponse class provides an interace for MediaStore DeleteCorsPolicy responses.
 *
 * \inmodule QtAwsMediaStore
 *
 *  An AWS Elemental MediaStore container is a namespace that holds folders and objects. You use a container endpoint to
 *  create, read, and delete objects.
 *
 * \sa MediaStoreClient::deleteCorsPolicy
 */

/*!
 * Constructs a DeleteCorsPolicyResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteCorsPolicyResponse::DeleteCorsPolicyResponse(
        const DeleteCorsPolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaStoreResponse(new DeleteCorsPolicyResponsePrivate(this), parent)
{
    setRequest(new DeleteCorsPolicyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteCorsPolicyRequest * DeleteCorsPolicyResponse::request() const
{
    Q_D(const DeleteCorsPolicyResponse);
    return static_cast<const DeleteCorsPolicyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MediaStore DeleteCorsPolicy \a response.
 */
void DeleteCorsPolicyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteCorsPolicyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaStore::DeleteCorsPolicyResponsePrivate
 * \brief The DeleteCorsPolicyResponsePrivate class provides private implementation for DeleteCorsPolicyResponse.
 * \internal
 *
 * \inmodule QtAwsMediaStore
 */

/*!
 * Constructs a DeleteCorsPolicyResponsePrivate object with public implementation \a q.
 */
DeleteCorsPolicyResponsePrivate::DeleteCorsPolicyResponsePrivate(
    DeleteCorsPolicyResponse * const q) : MediaStoreResponsePrivate(q)
{

}

/*!
 * Parses a MediaStore DeleteCorsPolicy response element from \a xml.
 */
void DeleteCorsPolicyResponsePrivate::parseDeleteCorsPolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteCorsPolicyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaStore
} // namespace QtAws
