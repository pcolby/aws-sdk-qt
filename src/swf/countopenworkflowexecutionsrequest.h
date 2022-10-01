// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_COUNTOPENWORKFLOWEXECUTIONSREQUEST_H
#define QTAWS_COUNTOPENWORKFLOWEXECUTIONSREQUEST_H

#include "swfrequest.h"

namespace QtAws {
namespace Swf {

class CountOpenWorkflowExecutionsRequestPrivate;

class QTAWSSWF_EXPORT CountOpenWorkflowExecutionsRequest : public SwfRequest {

public:
    CountOpenWorkflowExecutionsRequest(const CountOpenWorkflowExecutionsRequest &other);
    CountOpenWorkflowExecutionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CountOpenWorkflowExecutionsRequest)

};

} // namespace Swf
} // namespace QtAws

#endif
