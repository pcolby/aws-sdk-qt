// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MARKASARCHIVEDREQUEST_H
#define QTAWS_MARKASARCHIVEDREQUEST_H

#include "mgnrequest.h"

namespace QtAws {
namespace Mgn {

class MarkAsArchivedRequestPrivate;

class QTAWSMGN_EXPORT MarkAsArchivedRequest : public MgnRequest {

public:
    MarkAsArchivedRequest(const MarkAsArchivedRequest &other);
    MarkAsArchivedRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(MarkAsArchivedRequest)

};

} // namespace Mgn
} // namespace QtAws

#endif
