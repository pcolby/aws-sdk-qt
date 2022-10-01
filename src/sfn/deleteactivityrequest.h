// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEACTIVITYREQUEST_H
#define QTAWS_DELETEACTIVITYREQUEST_H

#include "sfnrequest.h"

namespace QtAws {
namespace Sfn {

class DeleteActivityRequestPrivate;

class QTAWSSFN_EXPORT DeleteActivityRequest : public SfnRequest {

public:
    DeleteActivityRequest(const DeleteActivityRequest &other);
    DeleteActivityRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteActivityRequest)

};

} // namespace Sfn
} // namespace QtAws

#endif
