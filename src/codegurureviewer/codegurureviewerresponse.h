// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CODEGURUREVIEWERRESPONSE_H
#define QTAWS_CODEGURUREVIEWERRESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawscodegurureviewerglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace CodeGuruReviewer {

class CodeGuruReviewerResponsePrivate;

class QTAWSCODEGURUREVIEWER_EXPORT CodeGuruReviewerResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    CodeGuruReviewerResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    CodeGuruReviewerResponse(CodeGuruReviewerResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CodeGuruReviewerResponse)
    Q_DISABLE_COPY(CodeGuruReviewerResponse)

};

} // namespace CodeGuruReviewer
} // namespace QtAws

#endif
