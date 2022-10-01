// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putlifecyclepolicyresponse.h"
#include "putlifecyclepolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaStore {

/*!
 * \class QtAws::MediaStore::PutLifecyclePolicyResponse
 * \brief The PutLifecyclePolicyResponse class provides an interace for MediaStore PutLifecyclePolicy responses.
 *
 * \inmodule QtAwsMediaStore
 *
 *  An AWS Elemental MediaStore container is a namespace that holds folders and objects. You use a container endpoint to
 *  create, read, and delete objects.
 *
 * \sa MediaStoreClient::putLifecyclePolicy
 */

/*!
 * Constructs a PutLifecyclePolicyResponse object for \a reply to \a request, with parent \a parent.
 */
PutLifecyclePolicyResponse::PutLifecyclePolicyResponse(
        const PutLifecyclePolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaStoreResponse(new PutLifecyclePolicyResponsePrivate(this), parent)
{
    setRequest(new PutLifecyclePolicyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutLifecyclePolicyRequest * PutLifecyclePolicyResponse::request() const
{
    Q_D(const PutLifecyclePolicyResponse);
    return static_cast<const PutLifecyclePolicyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MediaStore PutLifecyclePolicy \a response.
 */
void PutLifecyclePolicyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutLifecyclePolicyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaStore::PutLifecyclePolicyResponsePrivate
 * \brief The PutLifecyclePolicyResponsePrivate class provides private implementation for PutLifecyclePolicyResponse.
 * \internal
 *
 * \inmodule QtAwsMediaStore
 */

/*!
 * Constructs a PutLifecyclePolicyResponsePrivate object with public implementation \a q.
 */
PutLifecyclePolicyResponsePrivate::PutLifecyclePolicyResponsePrivate(
    PutLifecyclePolicyResponse * const q) : MediaStoreResponsePrivate(q)
{

}

/*!
 * Parses a MediaStore PutLifecyclePolicy response element from \a xml.
 */
void PutLifecyclePolicyResponsePrivate::parsePutLifecyclePolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutLifecyclePolicyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaStore
} // namespace QtAws
