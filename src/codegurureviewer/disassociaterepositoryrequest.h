// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEREPOSITORYREQUEST_H
#define QTAWS_DISASSOCIATEREPOSITORYREQUEST_H

#include "codegurureviewerrequest.h"

namespace QtAws {
namespace CodeGuruReviewer {

class DisassociateRepositoryRequestPrivate;

class QTAWSCODEGURUREVIEWER_EXPORT DisassociateRepositoryRequest : public CodeGuruReviewerRequest {

public:
    DisassociateRepositoryRequest(const DisassociateRepositoryRequest &other);
    DisassociateRepositoryRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisassociateRepositoryRequest)

};

} // namespace CodeGuruReviewer
} // namespace QtAws

#endif
