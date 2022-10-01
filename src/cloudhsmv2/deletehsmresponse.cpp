// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletehsmresponse.h"
#include "deletehsmresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudHsmV2 {

/*!
 * \class QtAws::CloudHsmV2::DeleteHsmResponse
 * \brief The DeleteHsmResponse class provides an interace for CloudHsmV2 DeleteHsm responses.
 *
 * \inmodule QtAwsCloudHsmV2
 *
 *  For more information about AWS CloudHSM, see <a href="http://aws.amazon.com/cloudhsm/">AWS CloudHSM</a> and the <a
 *  href="https://docs.aws.amazon.com/cloudhsm/latest/userguide/">AWS CloudHSM User
 *
 * \sa CloudHsmV2Client::deleteHsm
 */

/*!
 * Constructs a DeleteHsmResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteHsmResponse::DeleteHsmResponse(
        const DeleteHsmRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudHsmV2Response(new DeleteHsmResponsePrivate(this), parent)
{
    setRequest(new DeleteHsmRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteHsmRequest * DeleteHsmResponse::request() const
{
    Q_D(const DeleteHsmResponse);
    return static_cast<const DeleteHsmRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudHsmV2 DeleteHsm \a response.
 */
void DeleteHsmResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteHsmResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudHsmV2::DeleteHsmResponsePrivate
 * \brief The DeleteHsmResponsePrivate class provides private implementation for DeleteHsmResponse.
 * \internal
 *
 * \inmodule QtAwsCloudHsmV2
 */

/*!
 * Constructs a DeleteHsmResponsePrivate object with public implementation \a q.
 */
DeleteHsmResponsePrivate::DeleteHsmResponsePrivate(
    DeleteHsmResponse * const q) : CloudHsmV2ResponsePrivate(q)
{

}

/*!
 * Parses a CloudHsmV2 DeleteHsm response element from \a xml.
 */
void DeleteHsmResponsePrivate::parseDeleteHsmResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteHsmResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudHsmV2
} // namespace QtAws
