// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UNDEPRECATEWORKFLOWTYPERESPONSE_H
#define QTAWS_UNDEPRECATEWORKFLOWTYPERESPONSE_H

#include "swfresponse.h"
#include "undeprecateworkflowtyperequest.h"

namespace QtAws {
namespace Swf {

class UndeprecateWorkflowTypeResponsePrivate;

class QTAWSSWF_EXPORT UndeprecateWorkflowTypeResponse : public SwfResponse {
    Q_OBJECT

public:
    UndeprecateWorkflowTypeResponse(const UndeprecateWorkflowTypeRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UndeprecateWorkflowTypeRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UndeprecateWorkflowTypeResponse)
    Q_DISABLE_COPY(UndeprecateWorkflowTypeResponse)

};

} // namespace Swf
} // namespace QtAws

#endif
