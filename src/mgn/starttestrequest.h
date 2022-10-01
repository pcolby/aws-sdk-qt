// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTTESTREQUEST_H
#define QTAWS_STARTTESTREQUEST_H

#include "mgnrequest.h"

namespace QtAws {
namespace Mgn {

class StartTestRequestPrivate;

class QTAWSMGN_EXPORT StartTestRequest : public MgnRequest {

public:
    StartTestRequest(const StartTestRequest &other);
    StartTestRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartTestRequest)

};

} // namespace Mgn
} // namespace QtAws

#endif
