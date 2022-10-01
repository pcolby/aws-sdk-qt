// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEANSWERRESPONSE_H
#define QTAWS_UPDATEANSWERRESPONSE_H

#include "wellarchitectedresponse.h"
#include "updateanswerrequest.h"

namespace QtAws {
namespace WellArchitected {

class UpdateAnswerResponsePrivate;

class QTAWSWELLARCHITECTED_EXPORT UpdateAnswerResponse : public WellArchitectedResponse {
    Q_OBJECT

public:
    UpdateAnswerResponse(const UpdateAnswerRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateAnswerRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateAnswerResponse)
    Q_DISABLE_COPY(UpdateAnswerResponse)

};

} // namespace WellArchitected
} // namespace QtAws

#endif
