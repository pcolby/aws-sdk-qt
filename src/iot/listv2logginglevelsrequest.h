// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTV2LOGGINGLEVELSREQUEST_H
#define QTAWS_LISTV2LOGGINGLEVELSREQUEST_H

#include "iotrequest.h"

namespace QtAws {
namespace IoT {

class ListV2LoggingLevelsRequestPrivate;

class QTAWSIOT_EXPORT ListV2LoggingLevelsRequest : public IoTRequest {

public:
    ListV2LoggingLevelsRequest(const ListV2LoggingLevelsRequest &other);
    ListV2LoggingLevelsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListV2LoggingLevelsRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
