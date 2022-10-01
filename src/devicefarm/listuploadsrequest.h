// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTUPLOADSREQUEST_H
#define QTAWS_LISTUPLOADSREQUEST_H

#include "devicefarmrequest.h"

namespace QtAws {
namespace DeviceFarm {

class ListUploadsRequestPrivate;

class QTAWSDEVICEFARM_EXPORT ListUploadsRequest : public DeviceFarmRequest {

public:
    ListUploadsRequest(const ListUploadsRequest &other);
    ListUploadsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListUploadsRequest)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif
