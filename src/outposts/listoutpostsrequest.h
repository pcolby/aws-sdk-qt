// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTOUTPOSTSREQUEST_H
#define QTAWS_LISTOUTPOSTSREQUEST_H

#include "outpostsrequest.h"

namespace QtAws {
namespace Outposts {

class ListOutpostsRequestPrivate;

class QTAWSOUTPOSTS_EXPORT ListOutpostsRequest : public OutpostsRequest {

public:
    ListOutpostsRequest(const ListOutpostsRequest &other);
    ListOutpostsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListOutpostsRequest)

};

} // namespace Outposts
} // namespace QtAws

#endif
