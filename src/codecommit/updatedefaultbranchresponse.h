// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDEFAULTBRANCHRESPONSE_H
#define QTAWS_UPDATEDEFAULTBRANCHRESPONSE_H

#include "codecommitresponse.h"
#include "updatedefaultbranchrequest.h"

namespace QtAws {
namespace CodeCommit {

class UpdateDefaultBranchResponsePrivate;

class QTAWSCODECOMMIT_EXPORT UpdateDefaultBranchResponse : public CodeCommitResponse {
    Q_OBJECT

public:
    UpdateDefaultBranchResponse(const UpdateDefaultBranchRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateDefaultBranchRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateDefaultBranchResponse)
    Q_DISABLE_COPY(UpdateDefaultBranchResponse)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
