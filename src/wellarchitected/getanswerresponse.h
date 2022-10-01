// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETANSWERRESPONSE_H
#define QTAWS_GETANSWERRESPONSE_H

#include "wellarchitectedresponse.h"
#include "getanswerrequest.h"

namespace QtAws {
namespace WellArchitected {

class GetAnswerResponsePrivate;

class QTAWSWELLARCHITECTED_EXPORT GetAnswerResponse : public WellArchitectedResponse {
    Q_OBJECT

public:
    GetAnswerResponse(const GetAnswerRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetAnswerRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetAnswerResponse)
    Q_DISABLE_COPY(GetAnswerResponse)

};

} // namespace WellArchitected
} // namespace QtAws

#endif
