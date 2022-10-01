// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCONSOLEOUTPUTREQUEST_H
#define QTAWS_GETCONSOLEOUTPUTREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class GetConsoleOutputRequestPrivate;

class QTAWSEC2_EXPORT GetConsoleOutputRequest : public Ec2Request {

public:
    GetConsoleOutputRequest(const GetConsoleOutputRequest &other);
    GetConsoleOutputRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetConsoleOutputRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
