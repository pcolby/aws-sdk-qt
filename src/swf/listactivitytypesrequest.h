// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTACTIVITYTYPESREQUEST_H
#define QTAWS_LISTACTIVITYTYPESREQUEST_H

#include "swfrequest.h"

namespace QtAws {
namespace Swf {

class ListActivityTypesRequestPrivate;

class QTAWSSWF_EXPORT ListActivityTypesRequest : public SwfRequest {

public:
    ListActivityTypesRequest(const ListActivityTypesRequest &other);
    ListActivityTypesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListActivityTypesRequest)

};

} // namespace Swf
} // namespace QtAws

#endif
