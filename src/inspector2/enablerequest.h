// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ENABLEREQUEST_H
#define QTAWS_ENABLEREQUEST_H

#include "inspector2request.h"

namespace QtAws {
namespace Inspector2 {

class EnableRequestPrivate;

class QTAWSINSPECTOR2_EXPORT EnableRequest : public Inspector2Request {

public:
    EnableRequest(const EnableRequest &other);
    EnableRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(EnableRequest)

};

} // namespace Inspector2
} // namespace QtAws

#endif
