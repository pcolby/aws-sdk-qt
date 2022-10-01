// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTMITIGATIONACTIONSREQUEST_H
#define QTAWS_LISTMITIGATIONACTIONSREQUEST_H

#include "iotrequest.h"

namespace QtAws {
namespace IoT {

class ListMitigationActionsRequestPrivate;

class QTAWSIOT_EXPORT ListMitigationActionsRequest : public IoTRequest {

public:
    ListMitigationActionsRequest(const ListMitigationActionsRequest &other);
    ListMitigationActionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListMitigationActionsRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
