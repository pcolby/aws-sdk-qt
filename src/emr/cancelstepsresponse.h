// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELSTEPSRESPONSE_H
#define QTAWS_CANCELSTEPSRESPONSE_H

#include "emrresponse.h"
#include "cancelstepsrequest.h"

namespace QtAws {
namespace Emr {

class CancelStepsResponsePrivate;

class QTAWSEMR_EXPORT CancelStepsResponse : public EmrResponse {
    Q_OBJECT

public:
    CancelStepsResponse(const CancelStepsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CancelStepsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CancelStepsResponse)
    Q_DISABLE_COPY(CancelStepsResponse)

};

} // namespace Emr
} // namespace QtAws

#endif
