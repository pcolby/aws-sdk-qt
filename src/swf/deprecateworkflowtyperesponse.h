// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEPRECATEWORKFLOWTYPERESPONSE_H
#define QTAWS_DEPRECATEWORKFLOWTYPERESPONSE_H

#include "swfresponse.h"
#include "deprecateworkflowtyperequest.h"

namespace QtAws {
namespace Swf {

class DeprecateWorkflowTypeResponsePrivate;

class QTAWSSWF_EXPORT DeprecateWorkflowTypeResponse : public SwfResponse {
    Q_OBJECT

public:
    DeprecateWorkflowTypeResponse(const DeprecateWorkflowTypeRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeprecateWorkflowTypeRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeprecateWorkflowTypeResponse)
    Q_DISABLE_COPY(DeprecateWorkflowTypeResponse)

};

} // namespace Swf
} // namespace QtAws

#endif
