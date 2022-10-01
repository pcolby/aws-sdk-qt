// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDEVICEDEFINITIONSRESPONSE_H
#define QTAWS_LISTDEVICEDEFINITIONSRESPONSE_H

#include "greengrassresponse.h"
#include "listdevicedefinitionsrequest.h"

namespace QtAws {
namespace Greengrass {

class ListDeviceDefinitionsResponsePrivate;

class QTAWSGREENGRASS_EXPORT ListDeviceDefinitionsResponse : public GreengrassResponse {
    Q_OBJECT

public:
    ListDeviceDefinitionsResponse(const ListDeviceDefinitionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListDeviceDefinitionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListDeviceDefinitionsResponse)
    Q_DISABLE_COPY(ListDeviceDefinitionsResponse)

};

} // namespace Greengrass
} // namespace QtAws

#endif
