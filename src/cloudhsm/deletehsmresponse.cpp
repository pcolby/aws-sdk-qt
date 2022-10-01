// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletehsmresponse.h"
#include "deletehsmresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudHsm {

/*!
 * \class QtAws::CloudHsm::DeleteHsmResponse
 * \brief The DeleteHsmResponse class provides an interace for CloudHsm DeleteHsm responses.
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
 * \sa CloudHsmClient::deleteHsm
 */

/*!
 * Constructs a DeleteHsmResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteHsmResponse::DeleteHsmResponse(
        const DeleteHsmRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudHsmResponse(new DeleteHsmResponsePrivate(this), parent)
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
 * Parses a successful CloudHsm DeleteHsm \a response.
 */
void DeleteHsmResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteHsmResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudHsm::DeleteHsmResponsePrivate
 * \brief The DeleteHsmResponsePrivate class provides private implementation for DeleteHsmResponse.
 * \internal
 *
 * \inmodule QtAwsCloudHsm
 */

/*!
 * Constructs a DeleteHsmResponsePrivate object with public implementation \a q.
 */
DeleteHsmResponsePrivate::DeleteHsmResponsePrivate(
    DeleteHsmResponse * const q) : CloudHsmResponsePrivate(q)
{

}

/*!
 * Parses a CloudHsm DeleteHsm response element from \a xml.
 */
void DeleteHsmResponsePrivate::parseDeleteHsmResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteHsmResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudHsm
} // namespace QtAws
