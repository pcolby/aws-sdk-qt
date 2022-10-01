// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletehapgresponse.h"
#include "deletehapgresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudHsm {

/*!
 * \class QtAws::CloudHsm::DeleteHapgResponse
 * \brief The DeleteHapgResponse class provides an interace for CloudHsm DeleteHapg responses.
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
 * \sa CloudHsmClient::deleteHapg
 */

/*!
 * Constructs a DeleteHapgResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteHapgResponse::DeleteHapgResponse(
        const DeleteHapgRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudHsmResponse(new DeleteHapgResponsePrivate(this), parent)
{
    setRequest(new DeleteHapgRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteHapgRequest * DeleteHapgResponse::request() const
{
    Q_D(const DeleteHapgResponse);
    return static_cast<const DeleteHapgRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudHsm DeleteHapg \a response.
 */
void DeleteHapgResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteHapgResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudHsm::DeleteHapgResponsePrivate
 * \brief The DeleteHapgResponsePrivate class provides private implementation for DeleteHapgResponse.
 * \internal
 *
 * \inmodule QtAwsCloudHsm
 */

/*!
 * Constructs a DeleteHapgResponsePrivate object with public implementation \a q.
 */
DeleteHapgResponsePrivate::DeleteHapgResponsePrivate(
    DeleteHapgResponse * const q) : CloudHsmResponsePrivate(q)
{

}

/*!
 * Parses a CloudHsm DeleteHapg response element from \a xml.
 */
void DeleteHapgResponsePrivate::parseDeleteHapgResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteHapgResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudHsm
} // namespace QtAws
