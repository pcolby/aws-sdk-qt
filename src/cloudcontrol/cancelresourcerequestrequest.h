// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELRESOURCEREQUESTREQUEST_H
#define QTAWS_CANCELRESOURCEREQUESTREQUEST_H

#include "cloudcontrolrequest.h"

namespace QtAws {
namespace CloudControl {

class CancelResourceRequestRequestPrivate;

class QTAWSCLOUDCONTROL_EXPORT CancelResourceRequestRequest : public CloudControlRequest {

public:
    CancelResourceRequestRequest(const CancelResourceRequestRequest &other);
    CancelResourceRequestRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CancelResourceRequestRequest)

};

} // namespace CloudControl
} // namespace QtAws

#endif
