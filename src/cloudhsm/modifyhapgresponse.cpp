// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "modifyhapgresponse.h"
#include "modifyhapgresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudHsm {

/*!
 * \class QtAws::CloudHsm::ModifyHapgResponse
 * \brief The ModifyHapgResponse class provides an interace for CloudHsm ModifyHapg responses.
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
 * \sa CloudHsmClient::modifyHapg
 */

/*!
 * Constructs a ModifyHapgResponse object for \a reply to \a request, with parent \a parent.
 */
ModifyHapgResponse::ModifyHapgResponse(
        const ModifyHapgRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudHsmResponse(new ModifyHapgResponsePrivate(this), parent)
{
    setRequest(new ModifyHapgRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ModifyHapgRequest * ModifyHapgResponse::request() const
{
    Q_D(const ModifyHapgResponse);
    return static_cast<const ModifyHapgRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudHsm ModifyHapg \a response.
 */
void ModifyHapgResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ModifyHapgResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudHsm::ModifyHapgResponsePrivate
 * \brief The ModifyHapgResponsePrivate class provides private implementation for ModifyHapgResponse.
 * \internal
 *
 * \inmodule QtAwsCloudHsm
 */

/*!
 * Constructs a ModifyHapgResponsePrivate object with public implementation \a q.
 */
ModifyHapgResponsePrivate::ModifyHapgResponsePrivate(
    ModifyHapgResponse * const q) : CloudHsmResponsePrivate(q)
{

}

/*!
 * Parses a CloudHsm ModifyHapg response element from \a xml.
 */
void ModifyHapgResponsePrivate::parseModifyHapgResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ModifyHapgResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudHsm
} // namespace QtAws
