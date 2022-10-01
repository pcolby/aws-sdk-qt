// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESPONDACTIVITYTASKCOMPLETEDREQUEST_H
#define QTAWS_RESPONDACTIVITYTASKCOMPLETEDREQUEST_H

#include "swfrequest.h"

namespace QtAws {
namespace Swf {

class RespondActivityTaskCompletedRequestPrivate;

class QTAWSSWF_EXPORT RespondActivityTaskCompletedRequest : public SwfRequest {

public:
    RespondActivityTaskCompletedRequest(const RespondActivityTaskCompletedRequest &other);
    RespondActivityTaskCompletedRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RespondActivityTaskCompletedRequest)

};

} // namespace Swf
} // namespace QtAws

#endif
