// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISABLEREQUEST_H
#define QTAWS_DISABLEREQUEST_H

#include "inspector2request.h"

namespace QtAws {
namespace Inspector2 {

class DisableRequestPrivate;

class QTAWSINSPECTOR2_EXPORT DisableRequest : public Inspector2Request {

public:
    DisableRequest(const DisableRequest &other);
    DisableRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisableRequest)

};

} // namespace Inspector2
} // namespace QtAws

#endif
