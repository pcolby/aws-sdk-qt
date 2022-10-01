// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GENERATECHANGESETRESPONSE_H
#define QTAWS_GENERATECHANGESETRESPONSE_H

#include "smsresponse.h"
#include "generatechangesetrequest.h"

namespace QtAws {
namespace Sms {

class GenerateChangeSetResponsePrivate;

class QTAWSSMS_EXPORT GenerateChangeSetResponse : public SmsResponse {
    Q_OBJECT

public:
    GenerateChangeSetResponse(const GenerateChangeSetRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GenerateChangeSetRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GenerateChangeSetResponse)
    Q_DISABLE_COPY(GenerateChangeSetResponse)

};

} // namespace Sms
} // namespace QtAws

#endif
