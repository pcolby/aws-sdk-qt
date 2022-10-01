// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESPONDACTIVITYTASKCANCELEDREQUEST_H
#define QTAWS_RESPONDACTIVITYTASKCANCELEDREQUEST_H

#include "swfrequest.h"

namespace QtAws {
namespace Swf {

class RespondActivityTaskCanceledRequestPrivate;

class QTAWSSWF_EXPORT RespondActivityTaskCanceledRequest : public SwfRequest {

public:
    RespondActivityTaskCanceledRequest(const RespondActivityTaskCanceledRequest &other);
    RespondActivityTaskCanceledRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RespondActivityTaskCanceledRequest)

};

} // namespace Swf
} // namespace QtAws

#endif
