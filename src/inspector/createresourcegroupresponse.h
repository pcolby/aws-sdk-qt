// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATERESOURCEGROUPRESPONSE_H
#define QTAWS_CREATERESOURCEGROUPRESPONSE_H

#include "inspectorresponse.h"
#include "createresourcegrouprequest.h"

namespace QtAws {
namespace Inspector {

class CreateResourceGroupResponsePrivate;

class QTAWSINSPECTOR_EXPORT CreateResourceGroupResponse : public InspectorResponse {
    Q_OBJECT

public:
    CreateResourceGroupResponse(const CreateResourceGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateResourceGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateResourceGroupResponse)
    Q_DISABLE_COPY(CreateResourceGroupResponse)

};

} // namespace Inspector
} // namespace QtAws

#endif
