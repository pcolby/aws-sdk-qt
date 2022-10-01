// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_POLLFORACTIVITYTASKREQUEST_H
#define QTAWS_POLLFORACTIVITYTASKREQUEST_H

#include "swfrequest.h"

namespace QtAws {
namespace Swf {

class PollForActivityTaskRequestPrivate;

class QTAWSSWF_EXPORT PollForActivityTaskRequest : public SwfRequest {

public:
    PollForActivityTaskRequest(const PollForActivityTaskRequest &other);
    PollForActivityTaskRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PollForActivityTaskRequest)

};

} // namespace Swf
} // namespace QtAws

#endif
