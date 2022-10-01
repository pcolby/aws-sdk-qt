// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTWORKFLOWTYPESREQUEST_H
#define QTAWS_LISTWORKFLOWTYPESREQUEST_H

#include "swfrequest.h"

namespace QtAws {
namespace Swf {

class ListWorkflowTypesRequestPrivate;

class QTAWSSWF_EXPORT ListWorkflowTypesRequest : public SwfRequest {

public:
    ListWorkflowTypesRequest(const ListWorkflowTypesRequest &other);
    ListWorkflowTypesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListWorkflowTypesRequest)

};

} // namespace Swf
} // namespace QtAws

#endif
