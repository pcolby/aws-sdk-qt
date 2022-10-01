// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHGETFREETRIALINFORESPONSE_H
#define QTAWS_BATCHGETFREETRIALINFORESPONSE_H

#include "inspector2response.h"
#include "batchgetfreetrialinforequest.h"

namespace QtAws {
namespace Inspector2 {

class BatchGetFreeTrialInfoResponsePrivate;

class QTAWSINSPECTOR2_EXPORT BatchGetFreeTrialInfoResponse : public Inspector2Response {
    Q_OBJECT

public:
    BatchGetFreeTrialInfoResponse(const BatchGetFreeTrialInfoRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const BatchGetFreeTrialInfoRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchGetFreeTrialInfoResponse)
    Q_DISABLE_COPY(BatchGetFreeTrialInfoResponse)

};

} // namespace Inspector2
} // namespace QtAws

#endif
