// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletelunaclientresponse.h"
#include "deletelunaclientresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudHsm {

/*!
 * \class QtAws::CloudHsm::DeleteLunaClientResponse
 * \brief The DeleteLunaClientResponse class provides an interace for CloudHsm DeleteLunaClient responses.
 *
 * \inmodule QtAwsCloudHsm
 *
 *  <fullname>AWS CloudHSM Service</fullname>
 * 
 *  This is documentation for <b>AWS CloudHSM Classic</b>. For more information, see <a
 *  href="http://aws.amazon.com/cloudhsm/faqs-classic/">AWS CloudHSM Classic FAQs</a>, the <a
 *  href="https://docs.aws.amazon.com/cloudhsm/classic/userguide/">AWS CloudHSM Classic User Guide</a>, and the <a
 *  href="https://docs.aws.amazon.com/cloudhsm/classic/APIReference/">AWS CloudHSM Classic API
 * 
 *  Reference</a>>
 * 
 *  <b>For information about the current version of AWS CloudHSM</b>, see <a href="http://aws.amazon.com/cloudhsm/">AWS
 *  CloudHSM</a>, the <a href="https://docs.aws.amazon.com/cloudhsm/latest/userguide/">AWS CloudHSM User Guide</a>, and the
 *  <a href="https://docs.aws.amazon.com/cloudhsm/latest/APIReference/">AWS CloudHSM API
 *
 * \sa CloudHsmClient::deleteLunaClient
 */

/*!
 * Constructs a DeleteLunaClientResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteLunaClientResponse::DeleteLunaClientResponse(
        const DeleteLunaClientRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudHsmResponse(new DeleteLunaClientResponsePrivate(this), parent)
{
    setRequest(new DeleteLunaClientRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteLunaClientRequest * DeleteLunaClientResponse::request() const
{
    Q_D(const DeleteLunaClientResponse);
    return static_cast<const DeleteLunaClientRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudHsm DeleteLunaClient \a response.
 */
void DeleteLunaClientResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteLunaClientResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudHsm::DeleteLunaClientResponsePrivate
 * \brief The DeleteLunaClientResponsePrivate class provides private implementation for DeleteLunaClientResponse.
 * \internal
 *
 * \inmodule QtAwsCloudHsm
 */

/*!
 * Constructs a DeleteLunaClientResponsePrivate object with public implementation \a q.
 */
DeleteLunaClientResponsePrivate::DeleteLunaClientResponsePrivate(
    DeleteLunaClientResponse * const q) : CloudHsmResponsePrivate(q)
{

}

/*!
 * Parses a CloudHsm DeleteLunaClient response element from \a xml.
 */
void DeleteLunaClientResponsePrivate::parseDeleteLunaClientResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteLunaClientResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudHsm
} // namespace QtAws
