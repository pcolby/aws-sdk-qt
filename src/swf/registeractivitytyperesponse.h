// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REGISTERACTIVITYTYPERESPONSE_H
#define QTAWS_REGISTERACTIVITYTYPERESPONSE_H

#include "swfresponse.h"
#include "registeractivitytyperequest.h"

namespace QtAws {
namespace Swf {

class RegisterActivityTypeResponsePrivate;

class QTAWSSWF_EXPORT RegisterActivityTypeResponse : public SwfResponse {
    Q_OBJECT

public:
    RegisterActivityTypeResponse(const RegisterActivityTypeRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RegisterActivityTypeRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RegisterActivityTypeResponse)
    Q_DISABLE_COPY(RegisterActivityTypeResponse)

};

} // namespace Swf
} // namespace QtAws

#endif
