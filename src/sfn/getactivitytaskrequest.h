// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETACTIVITYTASKREQUEST_H
#define QTAWS_GETACTIVITYTASKREQUEST_H

#include "sfnrequest.h"

namespace QtAws {
namespace Sfn {

class GetActivityTaskRequestPrivate;

class QTAWSSFN_EXPORT GetActivityTaskRequest : public SfnRequest {

public:
    GetActivityTaskRequest(const GetActivityTaskRequest &other);
    GetActivityTaskRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetActivityTaskRequest)

};

} // namespace Sfn
} // namespace QtAws

#endif
