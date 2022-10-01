// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESPONDACTIVITYTASKFAILEDREQUEST_H
#define QTAWS_RESPONDACTIVITYTASKFAILEDREQUEST_H

#include "swfrequest.h"

namespace QtAws {
namespace Swf {

class RespondActivityTaskFailedRequestPrivate;

class QTAWSSWF_EXPORT RespondActivityTaskFailedRequest : public SwfRequest {

public:
    RespondActivityTaskFailedRequest(const RespondActivityTaskFailedRequest &other);
    RespondActivityTaskFailedRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RespondActivityTaskFailedRequest)

};

} // namespace Swf
} // namespace QtAws

#endif
