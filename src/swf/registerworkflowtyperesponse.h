// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REGISTERWORKFLOWTYPERESPONSE_H
#define QTAWS_REGISTERWORKFLOWTYPERESPONSE_H

#include "swfresponse.h"
#include "registerworkflowtyperequest.h"

namespace QtAws {
namespace Swf {

class RegisterWorkflowTypeResponsePrivate;

class QTAWSSWF_EXPORT RegisterWorkflowTypeResponse : public SwfResponse {
    Q_OBJECT

public:
    RegisterWorkflowTypeResponse(const RegisterWorkflowTypeRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RegisterWorkflowTypeRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RegisterWorkflowTypeResponse)
    Q_DISABLE_COPY(RegisterWorkflowTypeResponse)

};

} // namespace Swf
} // namespace QtAws

#endif
