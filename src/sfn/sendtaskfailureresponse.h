// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SENDTASKFAILURERESPONSE_H
#define QTAWS_SENDTASKFAILURERESPONSE_H

#include "sfnresponse.h"
#include "sendtaskfailurerequest.h"

namespace QtAws {
namespace Sfn {

class SendTaskFailureResponsePrivate;

class QTAWSSFN_EXPORT SendTaskFailureResponse : public SfnResponse {
    Q_OBJECT

public:
    SendTaskFailureResponse(const SendTaskFailureRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const SendTaskFailureRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SendTaskFailureResponse)
    Q_DISABLE_COPY(SendTaskFailureResponse)

};

} // namespace Sfn
} // namespace QtAws

#endif
