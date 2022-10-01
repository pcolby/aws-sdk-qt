// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletemetricpolicyresponse.h"
#include "deletemetricpolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaStore {

/*!
 * \class QtAws::MediaStore::DeleteMetricPolicyResponse
 * \brief The DeleteMetricPolicyResponse class provides an interace for MediaStore DeleteMetricPolicy responses.
 *
 * \inmodule QtAwsMediaStore
 *
 *  An AWS Elemental MediaStore container is a namespace that holds folders and objects. You use a container endpoint to
 *  create, read, and delete objects.
 *
 * \sa MediaStoreClient::deleteMetricPolicy
 */

/*!
 * Constructs a DeleteMetricPolicyResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteMetricPolicyResponse::DeleteMetricPolicyResponse(
        const DeleteMetricPolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaStoreResponse(new DeleteMetricPolicyResponsePrivate(this), parent)
{
    setRequest(new DeleteMetricPolicyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteMetricPolicyRequest * DeleteMetricPolicyResponse::request() const
{
    Q_D(const DeleteMetricPolicyResponse);
    return static_cast<const DeleteMetricPolicyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MediaStore DeleteMetricPolicy \a response.
 */
void DeleteMetricPolicyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteMetricPolicyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaStore::DeleteMetricPolicyResponsePrivate
 * \brief The DeleteMetricPolicyResponsePrivate class provides private implementation for DeleteMetricPolicyResponse.
 * \internal
 *
 * \inmodule QtAwsMediaStore
 */

/*!
 * Constructs a DeleteMetricPolicyResponsePrivate object with public implementation \a q.
 */
DeleteMetricPolicyResponsePrivate::DeleteMetricPolicyResponsePrivate(
    DeleteMetricPolicyResponse * const q) : MediaStoreResponsePrivate(q)
{

}

/*!
 * Parses a MediaStore DeleteMetricPolicy response element from \a xml.
 */
void DeleteMetricPolicyResponsePrivate::parseDeleteMetricPolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteMetricPolicyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaStore
} // namespace QtAws
