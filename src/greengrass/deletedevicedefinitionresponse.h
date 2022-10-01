// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDEVICEDEFINITIONRESPONSE_H
#define QTAWS_DELETEDEVICEDEFINITIONRESPONSE_H

#include "greengrassresponse.h"
#include "deletedevicedefinitionrequest.h"

namespace QtAws {
namespace Greengrass {

class DeleteDeviceDefinitionResponsePrivate;

class QTAWSGREENGRASS_EXPORT DeleteDeviceDefinitionResponse : public GreengrassResponse {
    Q_OBJECT

public:
    DeleteDeviceDefinitionResponse(const DeleteDeviceDefinitionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteDeviceDefinitionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteDeviceDefinitionResponse)
    Q_DISABLE_COPY(DeleteDeviceDefinitionResponse)

};

} // namespace Greengrass
} // namespace QtAws

#endif
