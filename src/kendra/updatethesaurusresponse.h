// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATETHESAURUSRESPONSE_H
#define QTAWS_UPDATETHESAURUSRESPONSE_H

#include "kendraresponse.h"
#include "updatethesaurusrequest.h"

namespace QtAws {
namespace Kendra {

class UpdateThesaurusResponsePrivate;

class QTAWSKENDRA_EXPORT UpdateThesaurusResponse : public KendraResponse {
    Q_OBJECT

public:
    UpdateThesaurusResponse(const UpdateThesaurusRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateThesaurusRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateThesaurusResponse)
    Q_DISABLE_COPY(UpdateThesaurusResponse)

};

} // namespace Kendra
} // namespace QtAws

#endif
